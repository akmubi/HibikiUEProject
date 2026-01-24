#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAudioEvent.generated.h"

class UAkAssetPlatformData;
class UAkAudioBank;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioEvent : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* RequiredBank;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAssetPlatformData* CurrentLocalizedPlatformData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAttenuationRadius_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInfinite_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDuration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDuration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> PerLanguageDurationMax_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> PerLanguageDurationMin_;
    
    UAkAudioEvent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float MinimumDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float MaximumDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float MaxAttenuationRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfinite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, float> GetPerLanguageDurationMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, float> GetPerLanguageDurationMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAttenuationRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInfinite() const;
    
};

