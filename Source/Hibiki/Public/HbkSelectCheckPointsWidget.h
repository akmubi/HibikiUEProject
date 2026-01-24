#pragma once
#include "CoreMinimal.h"
#include "ESCPType.h"
#include "HbkDebugJumpTableRow.h"
#include "HbkDebugWidgetBase.h"
#include "HbkSelectCheckPointsWidget.generated.h"

class UHbkDebugJumpDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSelectCheckPointsWidget : public UHbkDebugWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevDataTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevCheckPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkDebugJumpDataAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheckPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCPType SelectingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelDataTableNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDebugJumpTableRow SelectingCheckPointDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectingDT_FileName;
    
public:
    UHbkSelectCheckPointsWidget();

    UFUNCTION(BlueprintCallable)
    void RepeatUp();
    
    UFUNCTION(BlueprintCallable)
    void RepeatDown();
    
    UFUNCTION(BlueprintCallable)
    void PressRestartSound();
    
    UFUNCTION(BlueprintCallable)
    void PressDecide();
    
    UFUNCTION(BlueprintCallable)
    void PressCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PressedUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PressedRestartSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PressedDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PressedDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PressedCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_DebugPushL();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_CreateWidget(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_CompleteCreateWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ClearWidget();
    
};

