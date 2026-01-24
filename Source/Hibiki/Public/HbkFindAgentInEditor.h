#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkFindAgentInEditor.generated.h"

class AActor;
class UHbkFindAgentButton;
class UHbkGameAgentComponent;
class UPanelWidget;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkFindAgentInEditor : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* EditorWorld;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Agents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkFindAgentButton* SelectingAgentUI;
    
public:
    UHbkFindAgentInEditor();

protected:
    UFUNCTION(BlueprintCallable)
    void SetAgents(const TArray<FString>& Tags, const FString& callSign, TSubclassOf<UHbkFindAgentButton> CreateAgentButtonClass, TArray<UHbkFindAgentButton*>& OutWidgetsArray, UPanelWidget* ParentPanel);
    
    UFUNCTION(BlueprintCallable)
    bool HasATagToAgent(UHbkGameAgentComponent* AgentComp, const TArray<FString>& Tags);
    
    UFUNCTION(BlueprintCallable)
    bool HasACallSignToAgent(UHbkGameAgentComponent* AgentComp, const FString& callSign);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ClickedAgent();
    
};

