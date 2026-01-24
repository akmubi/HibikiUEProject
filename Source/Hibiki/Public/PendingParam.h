#pragma once
#include "CoreMinimal.h"
#include "PendingParam.generated.h"

class UHbkDialogWidget;
class ULocalPlayer;

USTRUCT(BlueprintType)
struct FPendingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULocalPlayer> OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkDialogWidget> WidgetClass;
    
    HIBIKI_API FPendingParam();
};

