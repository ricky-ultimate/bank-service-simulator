workspace "Bank-Service-Simulator"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "Bank-Service-App"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

group "Core"
	include "Bank-Service-Core/Build-Core.lua"
group ""

include "Bank-Service-App/Build-App.lua"