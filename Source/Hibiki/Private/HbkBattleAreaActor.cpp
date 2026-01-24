#include "HbkBattleAreaActor.h"
#include "Components/SceneComponent.h"
#include "HbkGameAgentComponent.h"

AHbkBattleAreaActor::AHbkBattleAreaActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->bIsDrawPointLine = false;
    this->GridPointSpaceBetween = 200.00f;
    this->ShortRangeGridNum = 5;
    this->MiddleRangeGridNum = 10;
    this->ItemLinkTraceQuery = TraceTypeQuery2;
    this->DecrementScoreValueWeight = 1.00f;
    this->bShowGridPoint = false;
    this->OverrideManagerAIClass = NULL;
    this->QueryTemplate = NULL;
    this->StepToDebugDraw = 0;
    this->TimeLimitPerStep = -1.00f;
    this->bDrawLabels = true;
    this->bDrawFailedItems = false;
    this->HighlightMode = EEnvQueryHightlightMode2::All;
    this->QueryingMode = EEnvQueryRunMode::AllMatching;
    this->bEnable = false;
    this->IndexNumX = -1;
    this->IndexNumY = -1;
    this->RegisteredID = 0;
    this->GameAgentComp = CreateDefaultSubobject<UHbkGameAgentComponent>(TEXT("GameAgentComponent"));
}

void AHbkBattleAreaActor::SetRangeGridNum(int32 Short, int32 Middle) {
}

void AHbkBattleAreaActor::OpRangeTypeScoring(AActor* AnchorActor) {
}

bool AHbkBattleAreaActor::IsInsideBattleAreaByLocation(const FVector Location) {
    return false;
}

void AHbkBattleAreaActor::GridPointUpdateOnDebug() {
}

TArray<FVector> AHbkBattleAreaActor::GetLocationsByRangeGroup(EAreaPointRangeType RangeType) {
    return TArray<FVector>();
}

void AHbkBattleAreaActor::FindPathByRange(FVector Start, FVector Goal, TArray<FVector>& PathPointList, float& PathScore, EAreaPointRangeType RangeType) {
}

void AHbkBattleAreaActor::CalcPathPoint(FVector Start, FVector Goal, TArray<FVector>& PathPointList) {
}


