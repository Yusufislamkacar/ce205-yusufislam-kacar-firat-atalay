// task_manager.h
#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <vector>
#include <string>

class TaskManager {
 public:
  // Görev sınıfı örneği
  class Task {
   public:
    std::string taskName;
    std::string description;
    // Diğer görev bilgileri
  };

  // Süreç sınıfı örneği
  class Process {
   public:
    std::string processName;
    std::vector<Task> tasks;
    // Diğer süreç bilgileri
  };

  // Örnek bir görev eklemek için işlev
  static void addTask(const Task &task);

  // Örnek bir görevi silmek için işlev
  static void deleteTask(const Task &task);

  // Örnek bir görevi isme göre bulmak için işlev
  static Task findTaskByName(const std::string &name);

  // Örnek bir süreç eklemek için işlev
  static void addProcess(const Process &process);

  // Örnek bir süreci silmek için işlev
  static void deleteProcess(const Process &process);

  // Örnek bir süreci isme göre bulmak için işlev
  static Process findProcessByName(const std::string &name);
};

#endif // TASK_MANAGER_H
