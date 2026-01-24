#pragma once
#include "CoreMinimal.h"
#include "HbkModelViewerModelActor.h"
#include "HbkModelViewerModelActorChangeMaterial.h"
#include "HbkModelViewerModelActor_mv_em1001.generated.h"

UCLASS(Blueprintable)
class AHbkModelViewerModelActor_mv_em1001 : public AHbkModelViewerModelActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkModelViewerModelActorChangeMaterial> ChangeMaterialList;
    
public:
    AHbkModelViewerModelActor_mv_em1001(const FObjectInitializer& ObjectInitializer);

};

