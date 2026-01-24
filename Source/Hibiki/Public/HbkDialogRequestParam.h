#pragma once
#include "CoreMinimal.h"
#include "EHbkDialogButtonSet.h"
#include "EHbkDialogWidgetType.h"
#include "HbkDialogOnButtonClickDelegate.h"
#include "HbkDialogRequestParam.generated.h"

class ULocalPlayer;

USTRUCT(BlueprintType)
struct FHbkDialogRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULocalPlayer> OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDialogWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDialogButtonSet ButtonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialogOnButtonClick OnButtonClickDelegate0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkDialogOnButtonClick OnButtonClickDelegate1;
    
    HIBIKI_API FHbkDialogRequestParam();
};

