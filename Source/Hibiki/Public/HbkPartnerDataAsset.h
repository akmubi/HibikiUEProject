#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkPartnerGenerateInfo.h"
#include "HbkPartnerDataAsset.generated.h"

UCLASS(Blueprintable)
class UHbkPartnerDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkPartnerGenerateInfo> PartnerGenerateInfoList;
    
    UHbkPartnerDataAsset();

};

