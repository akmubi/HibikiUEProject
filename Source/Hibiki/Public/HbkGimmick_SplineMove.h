#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_SplineMoveType_t.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SplineMove_SoundInfo_t.h"
#include "HbkGimmick_SplineMove.generated.h"

class AActor;
class AController;
class UDamageType;
class UMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SplineMove : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_SplineMoveType_t> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool waitActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool waitDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool defaultChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_SplineMove_SoundInfo_t soundInfo;
    
    AHbkGimmick_SplineMove(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_SplineMove(const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnBarEvent_SplineMove(const int32 Count);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMeshComponent* GetChangeOnMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMeshComponent* GetChangeOffMesh();
    
};

