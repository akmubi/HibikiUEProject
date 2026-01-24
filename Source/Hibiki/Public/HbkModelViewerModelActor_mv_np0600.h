#pragma once
#include "CoreMinimal.h"
#include "HbkModelViewerModelActor.h"
#include "HbkModelViewerModelActorEmissive.h"
#include "HbkModelViewerModelActor_mv_np0600.generated.h"

UCLASS(Blueprintable)
class AHbkModelViewerModelActor_mv_np0600 : public AHbkModelViewerModelActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkModelViewerModelActorEmissive> ChangeEmissiveList;
    
public:
    AHbkModelViewerModelActor_mv_np0600(const FObjectInitializer& ObjectInitializer);

};

