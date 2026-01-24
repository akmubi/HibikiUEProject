#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HbkModelViewerModelCenter.generated.h"

UCLASS(Blueprintable)
class AHbkModelViewerModelCenter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DefaultTransform;
    
public:
    AHbkModelViewerModelCenter(const FObjectInitializer& ObjectInitializer);

};

