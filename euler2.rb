sum=0#sum of even
a=0
b=1
while b<4000000
c=a+b
if c%2==0
sum=sum+c
end
a=b
b=c
end
puts sum

