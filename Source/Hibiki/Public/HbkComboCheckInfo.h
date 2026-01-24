#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkComboCheckInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkComboCheckInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ComboTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitCheck;
    
    HIBIKI_API FHbkComboCheckInfo();
};

