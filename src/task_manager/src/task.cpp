// task_manager.cpp
#include "task_manager.h"

void TaskManager::addTask(const Task &task) {
  // Görev ekleme işlemleri
}

void TaskManager::deleteTask(const Task &task) {
  // Görev silme işlemleri
}

TaskManager::Task TaskManager::findTaskByName(const std::string &name) {
  // İsmi verilen görevi bulma işlemleri
  // Bulunamazsa uygun bir değer döndürme
  return Task();
}

void TaskManager::addProcess(const Process &process) {
  // Süreç ekleme işlemleri
}

void TaskManager::deleteProcess(const Process &process) {
  // Süreç silme işlemleri
}

TaskManager::Process TaskManager::findProcessByName(const std::string &name) {
  // İsmi verilen süreci bulma işlemleri
  // Bulunamazsa uygun bir değer döndürme
  return Process();
}
