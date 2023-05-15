#include"Header.h"

int main() {
    setlocale(LC_ALL, "ru");
    std::vector<Literature> refs = {
        {"Cinquin, P. A.", "Guitton, P. & Sauzéon, H.", "Online e-learning and cognitive disabilities: A systematic review", "Computers & Education", "130", "152-167", "2019", "en"},
        {"Fershtman, C.", "Gandal, N.", "Direct and indirect knowledge spillovers: the “social network” of open‐source projects", "The RAND Journal of Economics", "42(1)", "70-91", "2011", "en"},
        {"García, M. L.", "Closed Groups, Hidden Knowledge. An Anthropological Perspective", "", "", "", "", "2008", "en"},
        {"Harvey, O. J.", "Hunt, D. E. & Schroder, H. M.", "Conceptual systems and personality organization", "", "", "", "1961", "en"},
        {"Eraut, M.", "Non-formal learning and tacit knowledge in professional work", "British journal of educational psychology", "70(1)", "113-136", "2000", "en"},
        {"Madsen, E. S.", "Riis, J. O. & Waehrens, B. V.", "The knowledge dimension of manufacturing transfers", "Strategic Outsourcing: An International Journal", "", "", "2008", "en"},
        {"Maslow, A. H.", "The psychology of science a reconnaissance", "", "", "", "", "1966", "en"},
        {"Moore, J. L.", "Dickson-Deane, C. & Galyen, K.", "e-Learning, online learning, and distance learning environments: Are they the same?", "The Internet and Higher Education", "14(2)", "129-135", "2011", "en"},
        {"Mortensen, M.", "Neeley, T. B.", "Reflected knowledge and trust in global collaboration", "Management Science", "58(12)", "2207-2224", "2012", "en"},
        {"Toivonen, S.", "Lenzini, G. & Uusitalo, I.", "Context-aware trustworthiness evaluation with indirect knowledge", "Proc. of the 2nd International Semantic Web Policy Workshop (SWPW)", "", "", "2006, November", "en"},
        {"Wood, J.", "BacKWell, J.", "harnessing hidden knowledge for paradigm change", "Journal of Writing in Creative Practice", "5(3)", "477-497", "2012", "en"},
         {"Маслоу А.Г.", "Мотивация и личность", "", "", "", "", "2000", "ru"},
        {"Ушинский, К. Д.", "Педагогика. Избранные работы", "М. Юрайт", "", "", "", "2017", "ru"},
        {"Wright, J. C.", "Mischel, W.", "Conditional hedges and the intuitive psychology of traits", "Journal of personality and social psychology", "55(3)", "454", "1988", "en"}
           
    };

    std::sort(refs.begin(), refs.end(), [](const Literature& a, const Literature& b) {
        if (a.language < b.language) {
            return true;
        }
        else if (a.language > b.language) {
            return false;
        }
        else {
            return a.author < b.author;
        }
        });

    std::string format = "";/*"{}. {}. {{}}. {}, {}, {}, {}."*/
    int count = 1;

    for (const Literature& ref : refs) {
        std::string num = "[" + std::to_string(count) + "]";
        if (ref.language == "ru") {
            std::cout << num << " " << format << "\n";
        }
        else {
            std::cout << num << " " << format << "\n";
        }

        std::cout << ref.author << ", ";
        std::cout << ref.title << ", ";
        std::cout << ref.journal << ", ";
        std::cout << ref.volume << ", ";
        std::cout << ref.issue << ", ";
        std::cout << ref.pages << ", ";
        std::cout << ref.year << ".\n\n";

        count++;
    }
    return 0;
}
