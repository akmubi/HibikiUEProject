#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HbkFindAgentButton.generated.h"

class AActor;
class UHbkFindAgentInEditor;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkFindAgentButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkFindAgentInEditor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Agent;
    
    UHbkFindAgentButton();

    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_RemovedFromObservation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnClicked();
    
};

