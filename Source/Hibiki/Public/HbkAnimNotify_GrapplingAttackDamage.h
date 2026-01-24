#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotify_GrapplingAttackDamage.generated.h"

class UDamageType;

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_GrapplingAttackDamage : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UHbkAnimNotify_GrapplingAttackDamage();

};

