#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DynamicObjectInfo.h"
#include "EAreaPointRangeType.h"
#include "ReserveLocationInfo.h"
#include "HbkManagerAIController.generated.h"

class AHbkBattleAreaActor;
class AHbkEnemyAIController;
class AHbkPlayerCameraManager;
class AHbkPlayerCharacterBase;
class UHbkEnemyManager;
class UHbkPlayerCharacterManager;

UCLASS(Abstract, Blueprintable)
class HIBIKI_API AHbkManagerAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkEnemyManager> wpEnemyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkPlayerCharacterManager> wpPlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerCameraManager> wpPlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerCharacterBase> wpPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkBattleAreaActor> wpBattleAreaActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReserveLocationInfo> CandidateLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FReserveLocationInfo> ReservedLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDynamicObjectInfo> DynamicObjectList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> WallCheckTraceQuery;
    
public:
    AHbkManagerAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestMoveToLocation(FVector& ResultLocation, EAreaPointRangeType RangeType, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReserveInfo(AHbkEnemyAIController* EnemyAI);
    
};

