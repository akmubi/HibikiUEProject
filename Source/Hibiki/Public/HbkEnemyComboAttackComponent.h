#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyComboAttackParam.h"
#include "HbkEnemyComboAttackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyComboAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyComboAttackParam> ComboParamList;
    
public:
    UHbkEnemyComboAttackComponent(const FObjectInitializer& ObjectInitializer);

};

