#pragma once
#include "CoreMinimal.h"
#include "HbkTaskAzitoStageSelectDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkAzitoStageSelectWidget.generated.h"

class UDataTable;
class UHbkAzitoStageSelectBarWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkAzitoStageSelectWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskAzitoStageSelectDelegate DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkAzitoStageSelectBarWidget> SelectBarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageSelectDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* StageScrollArea;
    
public:
    UHbkAzitoStageSelectWidget();

private:
    UFUNCTION(BlueprintCallable)
    void StageDecide();
    
    UFUNCTION()
    void SelectCell(uint64 AddIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseAnim();
    
private:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

