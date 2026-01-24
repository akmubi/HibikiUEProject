#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1600ADitherInfo.h"
#include "HbkGimmick_bg1600A.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg1600A : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_bg1600ADitherInfo> DitherInfos;
    
public:
    AHbkGimmick_bg1600A(const FObjectInitializer& ObjectInitializer);

};

