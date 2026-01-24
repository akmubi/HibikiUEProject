#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EHbkAzitoNpcType.h"
#include "HbkAzitoNpcDeployment.h"
#include "HbkAzitoData.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkAzitoData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkAzitoNpcType, FHbkAzitoNpcDeployment> NpcData;
    
    UHbkAzitoData();

};

