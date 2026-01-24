#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStageResultItemWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStageResultItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ChorusNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormatText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChorusNum;
    
    UHbkStageResultItemWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetChorusText();
    
};

