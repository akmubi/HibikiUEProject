#pragma once
#include "CoreMinimal.h"
#include "HbkSaveSlotCellBaseWidget.h"
#include "HbkSaveSlotExistCellWidget.generated.h"

class UHbkSaveGameDetail;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHbkSaveSlotExistCellWidget : public UHbkSaveSlotCellBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSaveGameDetail* Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ThumbnailImage;
    
public:
    UHbkSaveSlotExistCellWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUnsupportedOlderVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStageImage(const TSoftObjectPtr<UTexture2D>& StageImageTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDispInfo(const FText& StageName, const FText& SaveDate, const FText& PlayTime, const FText& Difficulty, bool bAllStageClear);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCorrupted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSelectImpl(bool bSelect);
    
};

