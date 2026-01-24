#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "HbkStageResultParentWidget.generated.h"

class UAkAudioEvent;
class UDataTable;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageResultParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StageNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LevelLoadSound;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnResultDisplayEnded;
    
    UHbkStageResultParentWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNextSelectPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFadeOut(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void EndResultDisplay();
    
};

