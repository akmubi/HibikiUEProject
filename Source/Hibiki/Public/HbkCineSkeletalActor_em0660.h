#pragma once
#include "CoreMinimal.h"
#include "HbkCineSkeletalActor.h"
#include "HbkCineSkeletalActor_em0660.generated.h"

UCLASS(Blueprintable)
class AHbkCineSkeletalActor_em0660 : public AHbkCineSkeletalActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MaterialSlotBoneSocketNameTable;
    
public:
    AHbkCineSkeletalActor_em0660(const FObjectInitializer& ObjectInitializer);

};

