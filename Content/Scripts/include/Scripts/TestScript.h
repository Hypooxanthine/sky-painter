#pragma once

#include <ScriptApi/ScriptLibrary.h>

#include <Vroom/Scene/Components/ScriptComponent.h>

class TestScript : public vrm::ScriptComponent
{
public:

  TestScript()  = default;
  ~TestScript() = default;

  void onSpawn() override;

  void onUpdate(const vrm::DeltaTime& dt) override;

private:
};

VRM_SCRIPT(TestScript)
