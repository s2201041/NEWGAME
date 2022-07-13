call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
msbuild "NEWGAME\\"%1".vcxproj"
cd NEWGAME\App
".\\"%1"(debug).exe"



