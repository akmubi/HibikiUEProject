#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkNp0140_DestroyInfo_t.h"
#include "HbkTalkableStageActor.h"
#include "HbkTalkableSt04_Np0140.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class AHbkTalkableSt04_Np0140 : public AHbkTalkableStageActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNp0140_DestroyInfo_t DestroyInfo;
    
public:
    AHbkTalkableSt04_Np0140(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void Np0140_Destroy();
    
};

