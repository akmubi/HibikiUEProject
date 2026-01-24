#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_Sound_AudioEventInfo_t.h"
#include "HbkGimmick_Sound.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_Sound : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_Sound_AudioEventInfo_t> StateInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_Sound_AudioEventInfo_t> SEInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_Sound_AudioEventInfo_t> ExtSEInfoArray;
    
public:
    AHbkGimmick_Sound(const FObjectInitializer& ObjectInitializer);

};

