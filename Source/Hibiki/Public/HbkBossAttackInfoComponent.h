#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAttackInfoComponent.h"
#include "HbkBossAttackInfoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBossAttackInfoComponent : public UHbkEnemyAttackInfoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DirectionAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LeftAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RightAttackTag;
    
public:
    UHbkBossAttackInfoComponent(const FObjectInitializer& ObjectInitializer);

};

