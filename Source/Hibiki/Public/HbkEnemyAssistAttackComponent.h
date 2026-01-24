#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEnemyAssistAttackComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyAssistAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyAssistAttackParameter_DT;
    
public:
    UHbkEnemyAssistAttackComponent(const FObjectInitializer& ObjectInitializer);

};

