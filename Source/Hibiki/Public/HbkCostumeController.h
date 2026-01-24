#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CostumeConChangePartnerCostumeDelegateDelegate.h"
#include "CostumeConChangePlayerCostumeDelegateDelegate.h"
#include "CostumeConChangePlayerCostumeKitDelegateDelegate.h"
#include "HbkCostumeDefaultTagAllMap.h"
#include "HbkCostumeController.generated.h"

UCLASS(Blueprintable)
class UHbkCostumeController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeConChangePlayerCostumeDelegate OnPlayerCostumeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeConChangePlayerCostumeKitDelegate OnPlayerCostumeKitChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeConChangePartnerCostumeDelegate OnPartnerCostumeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeDefaultTagAllMap CostumeDefaultTagAllMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeDefaultTagAllMap Costume2ndDefaultTagAllMap;
    
public:
    UHbkCostumeController();

};

