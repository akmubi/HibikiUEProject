#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EHbkEm7500CircleFireGroupType.h"
#include "HbkEm7500CircleFireGroupParam.h"
#include "HbkEnemyFireGroupBase.h"
#include "HbkEnemyFireGroup_Em7500Circle.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyFireGroup_Em7500Circle : public AHbkEnemyFireGroupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500CircleFireGroupType CircleFireGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500CircleFireGroupParam> FireGroupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CheckTraceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> CheckTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleHitCheck;
    
public:
    AHbkEnemyFireGroup_Em7500Circle(const FObjectInitializer& ObjectInitializer);

};

