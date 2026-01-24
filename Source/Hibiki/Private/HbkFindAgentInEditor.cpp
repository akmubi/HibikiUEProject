#include "HbkFindAgentInEditor.h"
#include "Templates/SubclassOf.h"

UHbkFindAgentInEditor::UHbkFindAgentInEditor() : UUserWidget(FObjectInitializer::Get()) {
    this->EditorWorld = NULL;
    this->SelectingAgentUI = NULL;
}

void UHbkFindAgentInEditor::SetAgents(const TArray<FString>& Tags, const FString& callSign, TSubclassOf<UHbkFindAgentButton> CreateAgentButtonClass, TArray<UHbkFindAgentButton*>& OutWidgetsArray, UPanelWidget* ParentPanel) {
}

bool UHbkFindAgentInEditor::HasATagToAgent(UHbkGameAgentComponent* AgentComp, const TArray<FString>& Tags) {
    return false;
}

bool UHbkFindAgentInEditor::HasACallSignToAgent(UHbkGameAgentComponent* AgentComp, const FString& callSign) {
    return false;
}



