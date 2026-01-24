#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_CoinDiveController.generated.h"

class AHbkEm6000_MovingEmbankment;
class AHbkEm6000_PopupArmStrongStatue;
class AHbkEm6000_PopupEmbankment;
class AHbkEm6000_PopupEmbankmentBase;
class AHbkEm6000_Roquefort;
class AHbkEm6000_StageController;

UCLASS(Blueprintable)
class AHbkEm6000_CoinDiveController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_StageController> StageController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkEm6000_Roquefort> Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_MovingEmbankment> MovingEmbankmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovingEmbankmentMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingEmbankmentPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_PopupEmbankment> PopupEmbankmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm6000_PopupArmStrongStatue> PopupArmStrongStatueClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopupEmbankmentMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmStrongStatueNearLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkEm6000_MovingEmbankment>> MovingEmbankments;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkEm6000_PopupEmbankmentBase>> PopupEmbankments;
    
public:
    AHbkEm6000_CoinDiveController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestSpawnPopupEmbankment();
    
    UFUNCTION(BlueprintCallable)
    void TestSpawnMovingEmbankment();
    
    UFUNCTION(BlueprintCallable)
    void TestDestroyPopupEmbankment();
    
    UFUNCTION(BlueprintCallable)
    void TestDestroyMovingEmbankment();
    
};

