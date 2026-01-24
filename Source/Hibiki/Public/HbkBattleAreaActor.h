#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ActorActivateInterface.h"
#include "AreaPointInfo.h"
#include "EAreaPointRangeType.h"
#include "EEnvQueryHightlightMode2.h"
#include "Templates/SubclassOf.h"
#include "HbkBattleAreaActor.generated.h"

class AHbkManagerAIController;
class AHbkPlayerCameraManager;
class AHbkPlayerCharacterBase;
class UEnvQuery;
class UHbkEnemyManager;
class UHbkGameAgentComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class HIBIKI_API AHbkBattleAreaActor : public AActor, public IEQSQueryResultSourceInterface, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawPointLine;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridPointSpaceBetween;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IgnoreItemList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShortRangeGridNum;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiddleRangeGridNum;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> ItemLinkTraceQuery;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecrementScoreValueWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGridPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkManagerAIController> OverrideManagerAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepToDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimitPerStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaPointInfo> AreaPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkEnemyManager> wpEnemyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerCharacterBase> wpPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkPlayerCameraManager> wpPlayerCameraManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawFailedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvQueryHightlightMode2 HighlightMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> QueryingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexNumX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexNumY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 RegisteredID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkBattleAreaActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetRangeGridNum(int32 Short, int32 Middle);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpRangeTypeScoring(AActor* AnchorActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideBattleAreaByLocation(const FVector Location);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GridPointUpdateOnDebug();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetLocationsByRangeGroup(EAreaPointRangeType RangeType);
    
    UFUNCTION(BlueprintCallable)
    void FindPathByRange(FVector Start, FVector Goal, TArray<FVector>& PathPointList, float& PathScore, EAreaPointRangeType RangeType);
    
    UFUNCTION(BlueprintCallable)
    void CalcPathPoint(FVector Start, FVector Goal, TArray<FVector>& PathPointList);
    

    // Fix for true pure virtual functions not being implemented
};

