#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkReserveBattleResult.h"
#include "HbkPlayerInheritData.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayerInheritData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bRespawnPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float TotalDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float TotalPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<int32, FHbkReserveBattleResult> ReserveBattleResultList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<float> LifeTankValueList;
    
    UHbkPlayerInheritData();

};

