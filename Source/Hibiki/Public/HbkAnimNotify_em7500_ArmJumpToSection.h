#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_em7500_ArmJumpToSection.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_em7500_ArmJumpToSection : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UHbkAnimNotify_em7500_ArmJumpToSection();

};

