#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1210_DitherInfo_t.h"
#include "HbkGimmick_bg1210.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg1210 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_bg1210_DitherInfo_t> DitherInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitherStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBrokenSave;
    
public:
    AHbkGimmick_bg1210(const FObjectInitializer& ObjectInitializer);

};

