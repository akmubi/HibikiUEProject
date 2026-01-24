#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkSt05Np0000_DestroyInfo_t.h"
#include "HbkTalkableStageActor.h"
#include "HbkTalkableSt05_Np0000.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class AHbkTalkableSt05_Np0000 : public AHbkTalkableStageActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSt05Np0000_DestroyInfo_t DestroyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SaveState;
    
public:
    AHbkTalkableSt05_Np0000(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void St05Np0000_Destroy();
    
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
};

