#pragma once
#include "CoreMinimal.h"
#include "HbkItemTicket.h"
#include "HbkSt05Np0000_DestroyInfo_t.generated.h"

class UAkAudioEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkSt05Np0000_DestroyInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DestroyVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pDestroyVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> DestroySFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pDestroySFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkItemTicket ItemTicket;
    
    HIBIKI_API FHbkSt05Np0000_DestroyInfo_t();
};

