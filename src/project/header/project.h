// project.h
#ifndef PROJECT_H
#define PROJECT_H

#include <string>

class Project {
 public:
  std::string projectName;
  std::string technologyStack;
  // Diğer proje bilgileri

  // Örnek bir proje eklemek için işlev
  static void addProject(const Project &project);

  // Örnek bir proje silmek için işlev
  static void deleteProject(const Project &project);

  // Örnek bir projeyi isme göre bulmak için işlev
  static Project findProjectByName(const std::string &name);

  // Örnek bir proje güncellemek için işlev
  static void updateProject(const Project &project);
};

#endif // PROJECT_H
