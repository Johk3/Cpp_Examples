##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Solving_Problems
ConfigurationName      :=Release
WorkspacePath          :=/media/johk/Mainframe/PycharmProjects/JSLAM/JSLAMPLUS
ProjectPath            :=/media/johk/Mainframe/cpp/Solving_Problems
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=johk
Date                   :=07/03/19
CodeLitePath           :=/home/johk/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Solving_Problems.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/ceasar_cipher.cpp$(ObjectSuffix) $(IntermediateDirectory)/whitespace.cpp$(ObjectSuffix) 



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
	@test -d ./Release || $(MakeDirCommand) ./Release


$(IntermediateDirectory)/.d:
	@test -d ./Release || $(MakeDirCommand) ./Release

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/johk/Mainframe/cpp/Solving_Problems/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/ceasar_cipher.cpp$(ObjectSuffix): ceasar_cipher.cpp $(IntermediateDirectory)/ceasar_cipher.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/johk/Mainframe/cpp/Solving_Problems/ceasar_cipher.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ceasar_cipher.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ceasar_cipher.cpp$(DependSuffix): ceasar_cipher.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ceasar_cipher.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ceasar_cipher.cpp$(DependSuffix) -MM ceasar_cipher.cpp

$(IntermediateDirectory)/ceasar_cipher.cpp$(PreprocessSuffix): ceasar_cipher.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ceasar_cipher.cpp$(PreprocessSuffix) ceasar_cipher.cpp

$(IntermediateDirectory)/whitespace.cpp$(ObjectSuffix): whitespace.cpp $(IntermediateDirectory)/whitespace.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/media/johk/Mainframe/cpp/Solving_Problems/whitespace.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/whitespace.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/whitespace.cpp$(DependSuffix): whitespace.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/whitespace.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/whitespace.cpp$(DependSuffix) -MM whitespace.cpp

$(IntermediateDirectory)/whitespace.cpp$(PreprocessSuffix): whitespace.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/whitespace.cpp$(PreprocessSuffix) whitespace.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


