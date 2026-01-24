#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmick_SplineMagnetRailEndAnimType.h"
#include "EHbkPlayerMagnetBackstabType.h"
#include "MagnetRailJumpActionDelegateDelegate.h"
#include "MagnetWarpDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkPlayerMagnetComponent.generated.h"

class UAnimSequenceBase;
class UDamageType;
class UHbkMagneticPointComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerMagnetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagnetWarpDelegate OnMagnetWarp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagnetRailJumpActionDelegate OnMagnetRailJumpStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagnetRailJumpActionDelegate OnMagnetRailJumpInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMagnetRailJumpActionDelegate OnMagnetRailJumpSuccess;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JamComboReceptionNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> MagnetTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> CameraToMagnetTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> MagnetCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* StartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AirStartAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MoveEndAirAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MoveEndGroundAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MoveEndEdgeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MoveEndEdgeAnimOneNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MoveEndEdgeAnimTwoNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MoveJustEndAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> MoveEndNextMagnetAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> StartNextMagnetAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> StartMagnetRailAnimTagList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MagnetRailSwingLAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MagnetRailSwingRAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* MagnetRailQTESuccessAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MagnetRailQTE_DodgeAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MagnetRailQTE_EnemyAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MagnetRailEndAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MagnetRailEndShortAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExMagnetRailEndAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MagnetRailJumpAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPlayerMagnetBackstabType, FGameplayTag> MagnetBackstabAnimMap;
    
public:
    UHbkPlayerMagnetComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnStartJumpAnim();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnPressKeyMagnetAnim(float Time);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnNextMagnetAnim();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnMagnetFailedAnim();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndMagnetJump();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnChangeSuccessSplineAnim();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAnimEndMoveSpline(EHbkGimmick_SplineMagnetRailEndAnimType EndAnimType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachMagnet() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDetachToMagnetPoint();
    
    UFUNCTION(BlueprintCallable)
    bool ForceAttachToMagnetPoint(UHbkMagneticPointComponent* MagnetPoint);
    
};

