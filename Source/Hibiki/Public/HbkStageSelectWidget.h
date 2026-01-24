#pragma once
#include "CoreMinimal.h"
#include "HbkTaskStageSelectDelegateDelegate.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkStageSelectWidget.generated.h"

class UDataTable;
class UHbkStageSelectBarWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageSelectWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskStageSelectDelegate DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStageSelectBarWidget> SelectBarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageSelectDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* StageScrollArea;
    
public:
    UHbkStageSelectWidget();

    UFUNCTION(BlueprintCallable)
    void StageDecide();
    
    UFUNCTION()
    void SelectCell(uint64 AddIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

