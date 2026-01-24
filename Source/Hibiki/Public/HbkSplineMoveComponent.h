#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EHbkGimmickCurveType_t.h"
#include "EHbkSplineMoveType_t.h"
#include "EHbkSplineRhythmMoveType_t.h"
#include "HbkSplineMoveCurveInfo_t.h"
#include "HbkSplineMoveCustomMoveInfo_t.h"
#include "HbkSplineMovePointInfo_t.h"
#include "HbkSplineMoveSoundInfo_t.h"
#include "HbkSplineMoveSpeedInto_t.h"
#include "HbkSplineMoveComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkSplineMoveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkSplineMove_MoveStart);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkSplineMove_MovePoint, int32, PointIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkSplineMove_MoveEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkSplineMove_LoadSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMove_MoveStart OnMoveStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMove_MoveStart OnMoveBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMove_MoveEnd OnMoveEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMove_MovePoint OnMovePoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMove_LoadSuccess OnLoadSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool defaultTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool gimmickBaseOnActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool gimmickBaseOnReturnCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool reverseOnDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkSplineMoveType_t> splineMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkSplineRhythmMoveType_t> splineRhythmMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t splineCurveMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> moveSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag moveSplineTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName moveSplineCallSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool loopMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 defaultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float offsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMovePointInfo_t pointInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMoveSpeedInto_t speedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMoveCustomMoveInfo_t customInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSplineMoveSoundInfo_t soundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkSplineMoveCurveInfo_t> curveInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* pMoveSplineActor;
    
    UHbkSplineMoveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSplineSpeedInfo(FHbkSplineMoveSpeedInto_t l_speedInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineInfo(TEnumAsByte<EHbkSplineMoveType_t> moveType, TEnumAsByte<EHbkSplineRhythmMoveType_t> rhythmType, EHbkGimmickCurveType_t curveType);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineCustomInfo(FHbkSplineMoveCustomMoveInfo_t l_customInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RhythmEvent_SplineMoveType_Speed(int32 BeatCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void RhythmEvent_SplineMoveType_Point(int32 BeatCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadSuccessForReturnCheckPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentReturnCheckPoint(AActor* Activator, FName CPName);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickComponentActivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveMove();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetSplineMoveWorldTransform(const float Distance);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetSplineMoveWorldRotator();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSplineMoveWorldLocationForDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSplineMoveWorldLocation2(const float Distance);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSplineMoveWorldLocation();
    
    UFUNCTION(BlueprintCallable)
    float GetDistanceForPoint(const int32 startIndex);
    
};

