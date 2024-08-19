cat /proc/cpuinfo | grep 'model name' | uniq
cat /proc/cpuinfo | grep 'model name' | wc -l
curl -s https://raw.githubusercontent.com/dariomalchiodi/superhero-datascience/master/content/data/heroes.csv | cut -d ";" -f 2 | tr '[:upper:]' '[:lower:]' | sed 's/ //g' | grep -v '^$'
sort -k4,4nr weather_cordoba.in | head -n 1 | awk '{print "Dia de maxima temperatura:" $1" "$2" "$3}' ; sort -k5,5n weather_cordoba.in | head -n 1 | awk '{print "Dia de minima temperatura;" $1" "$2" "$3}'
sort -k3,3n atpplayers.in
awk '{print $0, ($7-$8)}' superliga.in | sort -k2,2nr -k9,9nr
ip link show | grep -o -m 1 'ether [0-9a-f:]\{17\}' | awk '{print $2}'
mkdir fma && cd fma && for i in $(seq 1 10); do touch "fma_S01E$(printf "%02d" $i)_es.srt"; done && for f in *_es.srt; do mv "$f" "${f%_es.srt}.srt"; done