#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_CostumeCheckAccentMotion.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_CostumeCheckAccentMotion : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpToSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvFlag;
    
    UHbkAnimNotify_CostumeCheckAccentMotion();

};

