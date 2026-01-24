#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_AirShooterLuggageMesh.h"
#include "HbkGimmick_AirShooterLuggageParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmick_AirShooterLuggageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_AirShooterLuggageMesh> LuggageMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveOutOfPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> FlowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> MoveVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* MoveVfxRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveVfxCreationAdjustment;
    
    HIBIKI_API FHbkGimmick_AirShooterLuggageParam();
};

