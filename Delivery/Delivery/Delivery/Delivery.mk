##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Delivery
ConfigurationName      :=Debug
WorkspacePath          := "C:\git\Delivery\Delivery\Delivery"
ProjectPath            := "C:\git\Delivery\Delivery\Delivery\Delivery"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ANA ISABELA
Date                   :=02/05/2016
CodeLitePath           :="C:\Program Files (x86)\CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Delivery.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/x86_64-w64-mingw32-g++.exe -std=c++11
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Servico.cpp$(ObjectSuffix) $(IntermediateDirectory)/Delivery.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pizzaria.cpp$(ObjectSuffix) $(IntermediateDirectory)/Sushi.cpp$(ObjectSuffix) $(IntermediateDirectory)/Buffet.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Delivery/Delivery/Delivery/Delivery/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Servico.cpp$(ObjectSuffix): Servico.cpp $(IntermediateDirectory)/Servico.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Delivery/Delivery/Delivery/Delivery/Servico.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Servico.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Servico.cpp$(DependSuffix): Servico.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Servico.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Servico.cpp$(DependSuffix) -MM "Servico.cpp"

$(IntermediateDirectory)/Servico.cpp$(PreprocessSuffix): Servico.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Servico.cpp$(PreprocessSuffix) "Servico.cpp"

$(IntermediateDirectory)/Delivery.cpp$(ObjectSuffix): Delivery.cpp $(IntermediateDirectory)/Delivery.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Delivery/Delivery/Delivery/Delivery/Delivery.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Delivery.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Delivery.cpp$(DependSuffix): Delivery.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Delivery.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Delivery.cpp$(DependSuffix) -MM "Delivery.cpp"

$(IntermediateDirectory)/Delivery.cpp$(PreprocessSuffix): Delivery.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Delivery.cpp$(PreprocessSuffix) "Delivery.cpp"

$(IntermediateDirectory)/Pizzaria.cpp$(ObjectSuffix): Pizzaria.cpp $(IntermediateDirectory)/Pizzaria.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Delivery/Delivery/Delivery/Delivery/Pizzaria.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pizzaria.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pizzaria.cpp$(DependSuffix): Pizzaria.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Pizzaria.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Pizzaria.cpp$(DependSuffix) -MM "Pizzaria.cpp"

$(IntermediateDirectory)/Pizzaria.cpp$(PreprocessSuffix): Pizzaria.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pizzaria.cpp$(PreprocessSuffix) "Pizzaria.cpp"

$(IntermediateDirectory)/Sushi.cpp$(ObjectSuffix): Sushi.cpp $(IntermediateDirectory)/Sushi.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Delivery/Delivery/Delivery/Delivery/Sushi.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Sushi.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Sushi.cpp$(DependSuffix): Sushi.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Sushi.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Sushi.cpp$(DependSuffix) -MM "Sushi.cpp"

$(IntermediateDirectory)/Sushi.cpp$(PreprocessSuffix): Sushi.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Sushi.cpp$(PreprocessSuffix) "Sushi.cpp"

$(IntermediateDirectory)/Buffet.cpp$(ObjectSuffix): Buffet.cpp $(IntermediateDirectory)/Buffet.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Delivery/Delivery/Delivery/Delivery/Buffet.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Buffet.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Buffet.cpp$(DependSuffix): Buffet.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Buffet.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Buffet.cpp$(DependSuffix) -MM "Buffet.cpp"

$(IntermediateDirectory)/Buffet.cpp$(PreprocessSuffix): Buffet.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Buffet.cpp$(PreprocessSuffix) "Buffet.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


