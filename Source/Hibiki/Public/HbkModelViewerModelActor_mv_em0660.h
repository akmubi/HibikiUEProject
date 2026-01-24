#pragma once
#include "CoreMinimal.h"
#include "HbkModelViewerModelActor.h"
#include "HbkModelViewerModelActor_mv_em0660.generated.h"

UCLASS(Blueprintable)
class AHbkModelViewerModelActor_mv_em0660 : public AHbkModelViewerModelActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MaterialSlotBoneSocketNameTable;
    
public:
    AHbkModelViewerModelActor_mv_em0660(const FObjectInitializer& ObjectInitializer);

};

